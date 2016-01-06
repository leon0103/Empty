//
//  DetailViewController.h
//  Empty
//
//  Created by leon on 16/1/6.
//  Copyright © 2016年 leon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

