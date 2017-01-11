//
//  ViewController.m
//  SouFunManagerXcode
//
//  Created by 研究院01 on 17/1/4.
//  Copyright © 2017年 研究院01. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UIAlertView *alert = [[UIAlertView alloc]initWithTitle:@"时间" message:@"信息" delegate:self cancelButtonTitle:nil otherButtonTitles:nil, nil];
    [alert show];
    alert dismissWithClickedButtonIndex:<#(NSInteger)#> animated:<#(BOOL)#>
    self performSelector:@selector(dis) withObject:<#(nullable id)#> afterDelay:<#(NSTimeInterval)#>
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
