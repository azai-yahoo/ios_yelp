//
//  BusinessCell.h
//  Yelp
//
//  Created by Azai Chan on 6/25/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Business.h"

@interface BusinessCell : UITableViewCell

@property (nonatomic, strong) Business * business;

- (void)setBusiness:(Business *)business;

@end
