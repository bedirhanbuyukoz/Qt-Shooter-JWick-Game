#include "Score.h"
#include <QFont>



Score::Score(QGraphicsTextItem *parent): QGraphicsTextItem(parent){
    //initialize the score to 0
    score = 0;
    
    //draw the Text
    setPlainText(QString("Score: ") + QString::number(score));//score: 0
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));

    
}

void Score::increase(){
     score++;
     setPlainText(QString("Score: ") + QString::number(score)); // Score: 1

}

int Score::getScore(){
    return score;

}
