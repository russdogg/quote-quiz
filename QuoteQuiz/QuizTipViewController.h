//
//  QuizTipViewController.h
//  QuoteQuiz
//
//  Created by russ.dahlberg on 6/18/13.
//  Copyright (c) 2013 russdesigns. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol QuizTipViewControllerDelegate;
@interface QuizTipViewController : UIViewController

@property (nonatomic, assign) id <QuizTipViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextView *tipView;
@property (nonatomic, copy) NSString *tipText;

- (IBAction)doneAction:(id)sender;

@end

@protocol QuizTipViewControllerDelegate
- (void)quizTipDidFinish:(QuizTipViewController *)controller;
@end
