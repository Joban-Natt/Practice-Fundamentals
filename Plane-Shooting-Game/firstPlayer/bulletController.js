import Bullet from "./Bullet.js";

export default class BulletController {
  bullets = [];

  timerTillNextBullet = 0;

  constructor(canvas) {
    this.canvas = canvas;
  }

  shoot(x, y, speed, damage, delay, directionX, directionY) {
    if (this.timerTillNextBullet <= 0) {
      this.bullets.push(
        new Bullet(x, y, speed, damage, directionX, directionY)
      );
      this.timerTillNextBullet = delay;
    }

    this.timerTillNextBullet--;
  }

  draw(context) {
    this.bullets.forEach((bullet) => {
      if (this.isBulletOffScreenY(bullet) || this.isBulletOffScreenX(bullet)) {
        const index = this.bullets.indexOf(bullet);
        this.bullets.splice(index, 1);
      }
      // console.log(this.bullets.length);
      bullet.draw(context);
    });
  }

  isBulletOffScreenY(bullet) {
    if (bullet.y <= -bullet.height || bullet.y >= 600) {
      // Canvas height
      return true;
    }
  }

  isBulletOffScreenX(bullet) {
    if (bullet.x <= -bullet.width || bullet.x >= 600) {
      // Canvas Width
      return true;
    }
  }

  collideWith(sprite) {
    return this.bullets.some((bullet) => {
      if (bullet.collideWith(sprite)) {
        this.bullets.splice(this.bullets.indexOf(bullet), 1);
        return true;
      }
      return false;
    });
  }
}
