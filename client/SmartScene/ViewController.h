//
//  ViewController.h
//  SmartScene
//
//  Created by Chan Jerry on 13-1-22.
//  Copyright (c) 2013年 Chan Jerry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIGestureRecognizerDelegate>{
    IBOutlet UIWebView *contentView;
    IBOutlet UITextField *ipAddressView, *portView;
}

- (IBAction) connectAction:(id)sender;

@end
