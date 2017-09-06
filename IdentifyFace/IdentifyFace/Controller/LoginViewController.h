//
//  LoginViewController.h
//  IdentifyFace
//
//  Created by 马博强 on 2017/9/5.
//  Copyright © 2017年 Mr.Ma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
- (IBAction)login;
@property (weak, nonatomic) IBOutlet UITextField *account;
@property (weak, nonatomic) IBOutlet UITextField *password;

@end
