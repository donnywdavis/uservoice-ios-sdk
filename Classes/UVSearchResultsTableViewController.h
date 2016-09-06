//
//  UVSearchResultsTableViewController.h
//  UserVoice
//
//  Created by Donny Davis on 9/5/16.
//  Copyright © 2016 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UVBaseViewController.h"
#import "UVInstantAnswerManager.h"

@interface UVSearchResultsTableViewController : UITableViewController

@property (nonatomic, retain) UVInstantAnswerManager *instantAnswerManager;
@property (nonatomic, strong) NSArray *searchResults;

@end
