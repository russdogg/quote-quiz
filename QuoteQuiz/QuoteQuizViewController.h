//
//  QuoteQuizViewController.h
//  QuoteQuiz
//
//  Created by russ.dahlberg on 6/17/13.
//  Copyright (c) 2013 russdesigns. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuizTipViewController.h"

@class Quiz;
@interface QuoteQuizViewController : UIViewController <QuizTipViewControllerDelegate>


@property (nonatomic, assign) NSInteger quizIndex;
@property (nonatomic, strong) Quiz * quiz;


- (IBAction)ans1Action:(id)sender;
- (IBAction)ans2Action:(id)sender;
- (IBAction)ans3Action:(id)sender;
- (IBAction)startAgain:(id)sender;


@end


