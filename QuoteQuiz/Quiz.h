//
//  Quiz.h
//  QuoteQuiz
//
//  Created by russ.dahlberg on 6/17/13.
//  Copyright (c) 2013 russdesigns. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quiz : NSObject

@property (nonatomic, strong) NSMutableArray *movieArray;

@property (nonatomic, assign) NSInteger correctCount;
@property (nonatomic, assign) NSInteger incorrectCount;
@property (nonatomic, assign) NSInteger quizCount;

@property(nonatomic, readonly, strong) NSString * quote;
@property(nonatomic, readonly, strong) NSString * ans1;
@property(nonatomic, readonly, strong) NSString * ans2;
@property(nonatomic, readonly, strong) NSString * ans3;

-(id)initWithQuiz:(NSString*)plistName;
-(void) nextQuestion:(NSUInteger) idx;
-(BOOL) checkQuestion: (NSUInteger) question forAnswer: (NSUInteger) answer;


@end
