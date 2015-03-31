//
//  CCViewController.h
//  UIScrollView Challenge Solution
//
//  Created by jim Veneskey on 3/31/15.
//  Copyright (c) 2015 Jim Veneskey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;

@property (strong, nonatomic) UIImageView *globeImageView;

@end
