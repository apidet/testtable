//
//  TableViweController.h
//  testtable
//
//  Created by Torte on 7/4/55 BE.
//  Copyright (c) 2555 __MyCompanyName__. All rights reserved.
//


//


#import <UIKit/UIKit.h>

@interface TableViweController : UITableViewController
                                <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) NSArray *nameList;

@end
