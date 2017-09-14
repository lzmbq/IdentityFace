//
//  SigninViewController.h
//  IdentifyFace
//
//  Created by 马博强 on 2017/9/5.
//  Copyright © 2017年 Mr.Ma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SigninViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *account;
@property (weak, nonatomic) IBOutlet UITextField *password;
@property (weak, nonatomic) IBOutlet UITextField *confirmPassword;
- (IBAction)signinNextStep:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UINavigationBar *SINavigation;

@end
