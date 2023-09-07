export default class Bullet {
  constructor(x, y, speed, damage, directionX, directionY) {
    this.x = x;
    this.y = y;
    this.speed = speed;
    this.damage = damage;
    this.direX = directionX;
    this.direY = directionY;

    this.width = 5;
    this.height = 10;
  }

  draw(context) {
    this.y -= this.speed * this.direY;
    this.x += this.speed * this.direX;

    context.save();
    context.translate(this.x + this.width / 2, this.y + this.height / 2);

    if (this.direY >= 0) {
      context.rotate(Math.asin(this.direX));
    } else {
      context.rotate(Math.asin(-1 * this.direX));
    }

    context.fillStyle = "black";
    context.fillRect(
      -this.width / 2,
      -this.height / 2,
      this.width,
      this.height
    );
    context.restore();
  }

  collideWith(sprite) {
    if (
      this.x < sprite.x + sprite.width &&
      this.x + this.width > sprite.x &&
      this.y < sprite.y + sprite.height &&
      this.y + this.height > sprite.y
    ) {
      sprite.takeDamage(this.damage);
      return true;
    }
    return false;
  }
}
