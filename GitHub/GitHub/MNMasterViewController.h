//
//  MNMasterViewController.h
//  GitHub
//
//  Created by Ravi Vooda on 21/08/14.
//  Copyright (c) 2014 Ravi Vooda. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MNDetailViewController;

@interface MNMasterViewController : UITableViewController

@property (strong, nonatomic) MNDetailViewController *detailViewController;

@end
