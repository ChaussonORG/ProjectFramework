//
//  ViewController.h
//  JSCore
//
//  Created by Chausson on 16/7/9.
//  Copyright © 2016年 Chausson. All rights reserved.
//
#import <JavaScriptCore/JavaScriptCore.h>
#import <UIKit/UIKit.h>
//首先创建一个实现了JSExport协议的协议
@protocol TestJSObjectProtocol <JSExport>

//此处我们测试几种参数的情况
-(void)TestNOParameter;
-(void)TestOneParameter:(NSString *)message;
-(void)TestTowParameter:(NSString *)message1 SecondParameter:(NSString *)message2;

@end
@interface ViewController : UIViewController<TestJSObjectProtocol,UIWebViewDelegate>


@end

