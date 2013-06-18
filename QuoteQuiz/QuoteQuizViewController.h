//
//  QuoteQuizViewController.h
//  QuoteQuiz
//
//  Created by russ.dahlberg on 6/17/13.
//  Copyright (c) 2013 russdesigns. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Quiz.h"

@class Quiz;

@interface QuoteQuizViewController : UIViewController

@property (nonatomic, assign) NSInteger quizIndex;
@property (nonatomic, strong) Quiz *quiz;

@end
