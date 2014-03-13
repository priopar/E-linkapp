//
//  MasterViewController.h
//  E-linkapp
//
//  Created by Yasin Hussein on 2014-03-13.
//  Copyright (c) 2014 Primate & Partners AB. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
