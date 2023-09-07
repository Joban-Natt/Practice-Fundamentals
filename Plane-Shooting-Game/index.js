import Player1 from "./firstPlayer/player1.js";
import Player2 from "./SecondPlayer/player2.js";
import BulletController from "./firstPlayer/bulletController.js";
import scndBulletController from "./SecondPlayer/scndbulletController.js";

const canvas = document.getElementById("game");
const replayButton = document.getElementById("respawn");
const context = canvas.getContext("2d");

replayButton.addEventListener("click", function () {
  location.reload();
});

canvas.width = 600;
canvas.height = 600;

const bulletController = new BulletController(canvas);
const scndbulletController = new scndBulletController(canvas);

const health = 10;

var playerOne = new Player1(
  canvas.width / 2.2,
  canvas.height / 1.3,
  bulletController,
  health
);

var playerTwo = new Player2(
  canvas.width / 2.2,
  canvas.height / 4.2,
  scndbulletController,
  health
);

function gameloop() {
  context.fillStyle = "gray";
  context.fillRect(0, 0, canvas.width, canvas.height);
  bulletController.draw(context);

  if (scndbulletController.collideWith(playerOne)) {
    if (playerOne.health <= 0) {
      playerOne = 0;
    }
  } else if (playerOne != 0) {
    playerOne.draw(context);
  }

  scndbulletController.draw(context);

  if (bulletController.collideWith(playerTwo)) {
    console.log(playerTwo.health);
    if (playerTwo.health <= 0) {
      playerTwo = 0;
    }
  } else if (playerTwo != 0) {
    playerTwo.draw(context);
  }
}

setInterval(gameloop, 1000 / 60);
