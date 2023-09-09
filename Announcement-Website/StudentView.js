//S means Students
var jsGrade9S;
var jsGrade10S;
var jsGrade11S;
var jsGrade12S;
var jsTypeS;
var jsClubTypeS;

function filterResults() {
    //Checks which options are selected
    jsGrade9S = document.getElementById("htmlGrade9S").checked;
    jsGrade10S = document.getElementById("htmlGrade10S").checked;
    jsGrade11S = document.getElementById("htmlGrade11S").checked;
    jsGrade12S = document.getElementById("htmlGrade12S").checked;
    jsTypeS = document.getElementById("typeS").value;
    jsClubTypeS = document.getElementById("typeOfClub").value;
    //Stores the values of the options in your local storage
    localStorage.setItem('jsGrade9SKey', jsGrade9S);
    localStorage.setItem('jsGrade10SKey', jsGrade10S);
    localStorage.setItem('jsGrade11SKey',jsGrade11S);
    localStorage.setItem('jsGrade12SKey', jsGrade12S);
    localStorage.setItem('jsTypeSKey', jsTypeS);
    localStorage.setItem('jsClubSKey', jsClubTypeS);
}
