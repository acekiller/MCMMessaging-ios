//
//  MCTaskCell.h
//  MCMMessaging
//
//  Created by Madis Nõmme on 2/21/11.
//  Copyright 2011 Indilo Wireless. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PageCell.h"

@class MCTask;
@interface MCTaskCell : PageCell {

	UILabel *taskNameLabel;
	MCTask *task;
}

@property (nonatomic, retain) IBOutlet UILabel *taskNameLabel;

@end
