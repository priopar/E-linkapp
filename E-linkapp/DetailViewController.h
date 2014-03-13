//
//  DetailViewController.h
//  E-linkapp
//
//  Created by Yasin Hussein on 2014-03-13.
//  Copyright (c) 2014 Primate & Partners AB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
