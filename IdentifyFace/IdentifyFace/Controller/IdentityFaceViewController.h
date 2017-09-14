//
//  IdentityFaceViewController.h
//  IdentifyFace
//
//  Created by 马博强 on 2017/9/7.
//  Copyright © 2017年 Mr.Ma. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface IdentityFaceViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)chooseImage:(id)sender;

@end
