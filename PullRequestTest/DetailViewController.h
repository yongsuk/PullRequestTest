//
//  DetailViewController.h
//  PullRequestTest
//
//  Created by 金 容碩 on 2015/06/08.
//  Copyright (c) 2015年 金 容碩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

