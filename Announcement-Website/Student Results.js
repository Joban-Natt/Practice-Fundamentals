var teacherGr9Results = [];
var teacherGr10Results = [];
var teacherGr11Results = [];
var teacherGr12Results = [];
var teacherCategoryResults = [];
var teacherClubResults = [];
var announcementHolder = "";
var studentGr9Results;
var studentGr10Results;
var studentGr11Results;
var studentGr12Results;
var studentCategoryResults;
var studentClubResults;
var teacherAnnouncementDetails = [];

function filterResultsB() {
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
    localStorage.setItem('jsGrade11SKey', jsGrade11S);
    localStorage.setItem('jsGrade12SKey', jsGrade12S);
    localStorage.setItem('jsTypeSKey', jsTypeS);
    localStorage.setItem('jsClubSKey', jsClubTypeS);
}

function displayResults() {

    //Retrieves the values from the local storage
    teacherGr9Results = JSON.parse(localStorage.getItem('jsGrade9TKey'));
    teacherGr10Results = JSON.parse(localStorage.getItem('jsGrade10TKey'));
    teacherGr11Results = JSON.parse(localStorage.getItem('jsGrade11TKey'));
    teacherGr12Results = JSON.parse(localStorage.getItem('jsGrade12TKey'));
    teacherCategoryResults = JSON.parse(localStorage.getItem('jsTypeTKey'));
    teacherClubResults = JSON.parse(localStorage.getItem('jsClubTKey'));
    studentGr9Results = JSON.parse(localStorage.getItem('jsGrade9SKey'));
    studentGr10Results = JSON.parse(localStorage.getItem('jsGrade10SKey'));
    studentGr11Results = JSON.parse(localStorage.getItem('jsGrade11SKey'));
    studentGr12Results = JSON.parse(localStorage.getItem('jsGrade12SKey'));
    studentCategoryResults = localStorage.getItem('jsTypeSKey');
    studentClubResults = localStorage.getItem('jsClubSKey');
    teacherAnnouncementDetails = JSON.parse(localStorage.getItem('jsPostKey'));
    
    for (var i = 0; i < teacherGr9Results.length; i++) {
        //Checks to see if the teacher and students chose the same results
        if (((teacherGr9Results[i] === true && studentGr9Results === true) || (teacherGr10Results[i] === true && studentGr10Results === true) ||
            (teacherGr11Results[i] === true && studentGr11Results === true) || (teacherGr12Results[i] === true && studentGr12Results === true)) &&
            //Checks to see if the clubs match up or if they dont want to specify
            ((teacherCategoryResults[i] === studentCategoryResults && teacherClubResults[i] === studentClubResults) ||
            (studentCategoryResults === 'noCategory' && studentClubResults === 'noClub') ||
            (teacherCategoryResults[i] === studentCategoryResults && studentClubResults === 'noClub') ||
            (studentCategoryResults === 'noCategory' && teacherClubResults[i] === studentClubResults))) {

            announcementHolder += teacherAnnouncementDetails[i]
            announcementHolder += "\n"
            announcementHolder += "\n"
        }
        document.getElementById("announcementPosted").innerHTML = announcementHolder

    }

}
