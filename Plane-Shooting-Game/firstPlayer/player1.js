export default class Player1 {
  constructor(x, y, bulletController, health) {
    this.x = x;
    this.y = y;
    this.bulletController = bulletController;
    this.width = 50;
    this.height = 50;
    this.speed = 4;
    this.rotateSpeed = 5;
    this.rotation = 0;
    this.health = health;
    this.image = new Image();
    this.image.src = "./plane.png";

    document.addEventListener("keydown", this.keydown);
    document.addEventListener("keyup", this.keyup);
  }

  draw(context) {
    this.move();

    context.save();
    context.translate(this.x + this.width / 2, this.y + this.height / 2);
    context.rotate(this.rotation * (Math.PI / 180));

    context.drawImage(
      this.image,
      -this.width / 2,
      -this.height / 2,
      this.width,
      this.height
    );

    context.restore();

    this.shoot();
  }

  shoot() {
    if (this.shootPressed) {
      const speed = 5;
      const delay = 10;
      const damage = 1;
      const bulletX = this.x + this.width / 2;
      const bulletY = this.y;
      const directionY = Math.cos(this.rotation * (Math.PI / 180));
      const directionX = Math.sin(this.rotation * (Math.PI / 180));
      this.bulletController.shoot(
        bulletX,
        bulletY,
        speed,
        damage,
        delay,
        directionX,
        directionY
      );
    }
  }

  move() {
    if (this.downPressed) {
      this.y += this.speed * Math.cos(this.rotation * (Math.PI / 180));
      this.x -= this.speed * Math.sin(this.rotation * (Math.PI / 180));
    }
    if (this.upPressed) {
      this.y -= this.speed * Math.cos(this.rotation * (Math.PI / 180));
      this.x += this.speed * Math.sin(this.rotation * (Math.PI / 180));
    }
    if (this.leftPressed) {
      this.rotation -= this.rotateSpeed;
    }
    if (this.rightPressed) {
      this.rotation += this.rotateSpeed;
    }
    if (this.x + this.width < 0) {
      this.x = 600;
    }
    if (this.x + this.width > 600 + this.width) {
      this.x = -this.width;
    }
    if (this.y + this.height < 0) {
      this.y = 600;
    }
    if (this.y + this.height > 600 + this.height) {
      this.y = -this.height;
    }
  }

  keydown = (e) => {
    if (e.code === "ArrowUp") {
      this.upPressed = true;
    }
    if (e.code === "ArrowDown") {
      this.downPressed = true;
    }
    if (e.code === "ArrowLeft") {
      this.leftPressed = true;
    }
    if (e.code === "ArrowRight") {
      this.rightPressed = true;
    }
    if (e.code === "Comma") {
      this.shootPressed = true;
    }
  };

  keyup = (e) => {
    if (e.code === "ArrowUp") {
      this.upPressed = false;
    }
    if (e.code === "ArrowDown") {
      this.downPressed = false;
    }
    if (e.code === "ArrowLeft") {
      this.leftPressed = false;
    }
    if (e.code === "ArrowRight") {
      this.rightPressed = false;
    }
    if (e.code === "Comma") {
      this.shootPressed = false;
    }
  };

  takeDamage(damage) {
    this.health -= damage;
  }
}
