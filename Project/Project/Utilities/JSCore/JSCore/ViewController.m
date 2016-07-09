//
//  ViewController.m
//  JSCore
//
//  Created by Chausson on 16/7/9.
//  Copyright © 2016年 Chausson. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIWebView *web = [[UIWebView alloc]initWithFrame:self.view.bounds];
    [web loadRequest:[NSURLRequest requestWithURL:[NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"js" ofType:@"html" ]]]];
    web.delegate = self;
    [self.view addSubview:web];
}

-(void)webViewDidFinishLoad:(UIWebView *)webView

{

    
    JSContext *context=[webView valueForKeyPath:@"documentView.webView.mainFrame.javaScriptContext"];
    
    
    context[@"testobject"]= self;
    
    
}
-(void)TestNOParameter
{
    NSLog(@"this is ios TestNOParameter");
}
- (void)TestOneParameter:(NSString *)str{
    
    NSLog(@"this is ios TestOneParameter :%@",str);
}
- (void)TestTowParameter:(NSString *)first SecondParameter:(NSString *)second{
    
   NSLog(@"this is ios TestTowParameter :%@ second:%@ ",first ,second);
    
}
@end
