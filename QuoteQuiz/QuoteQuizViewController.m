//
//  QuoteQuizViewController.m
//  QuoteQuiz
//
//  Created by russ.dahlberg on 6/17/13.
//  Copyright (c) 2013 russdesigns. All rights reserved.
//

#import "QuoteQuizViewController.h"

@interface QuoteQuizViewController ()


@property(weak, nonatomic) IBOutlet UILabel *questionLabel;
@property(weak, nonatomic) IBOutlet UILabel *answer1Label;
@property(weak, nonatomic) IBOutlet UILabel *answer2Label;
@property(weak, nonatomic) IBOutlet UILabel *answer3Label;

@property(weak, nonatomic) IBOutlet UIButton *answer1Button;
@property(weak, nonatomic) IBOutlet UIButton *answer2Button;
@property(weak, nonatomic) IBOutlet UIButton *answer3Button;

@property(weak, nonatomic) IBOutlet UIImageView *movie1;
@property(weak, nonatomic) IBOutlet UIImageView *movie2;
@property(weak, nonatomic) IBOutlet UIImageView *movie3;

@property(weak, nonatomic) IBOutlet UILabel *statusLabel;

@property(weak, nonatomic) IBOutlet UIButton *startButton;
@property(weak, nonatomic) IBOutlet UIButton *infoButton;

@property (assign, nonatomic) NSInteger answer;

@end

@implementation QuoteQuizViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	self.quizIndex = 999;
    self.quiz = [[Quiz alloc] initWithQuiz:@"quotes"];
}


- (void) quizDone
{
    
    //MORE TO DO LATER
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
