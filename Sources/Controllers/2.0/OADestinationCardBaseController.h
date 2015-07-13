//
//  OADestinationCardBaseController.h
//  OsmAnd
//
//  Created by Alexey Kulish on 11/07/15.
//  Copyright (c) 2015 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OADestinationCardBaseControllerDelegate <NSObject>

@optional
- (void)indexPathForSwipingCellChanged:(NSIndexPath *)indexPath;
- (void)showActiveSheet:(UIActionSheet *)activeSheet;

- (void)refreshSwipeButtons:(NSInteger)section;
- (void)refreshFirstRow:(NSInteger)section;
- (void)refreshVisibleRows:(NSInteger)section;
- (void)refreshAllRows:(NSInteger)section;

- (void)cardRemoved:(NSInteger)section;

- (BOOL)isDecelerating;
- (BOOL)isSwiping;

- (void)hide;

@end

@interface OADestinationCardBaseController : NSObject

@property (nonatomic, readonly) UITableView *tableView;

@property (nonatomic, readonly) NSInteger section;
@property (nonatomic, weak) id<OADestinationCardBaseControllerDelegate> delegate;
@property (nonatomic, readonly) NSIndexPath *activeIndexPath;

- (instancetype)initWithSection:(NSInteger)section tableView:(UITableView *)tableView;

- (void)generateData;

- (NSString *)headerTitle;
- (NSString *)headerButtonName;
- (void)headerButtonPressed;

- (NSInteger)rowsCount;
- (UITableViewCell *)cellForRow:(NSInteger)row;
- (void)didSelectRow:(NSInteger)row;

- (id)getItem:(NSInteger)row;
- (void)updateCell:(UITableViewCell *)cell item:(id)item row:(NSInteger)row;

- (NSArray *)getSwipeButtons:(NSInteger)row;

- (void)onAppear;
- (void)onDisappear;

- (void)setupHeaderButtonTarget:(UIButton *)rightButton;

- (void)refreshSwipeButtons;
- (void)refreshFirstRow;
- (void)refreshVisibleRows;
- (void)refreshAllRows;

- (BOOL)isDecelerating;
- (BOOL)isSwiping;

- (void)removeCard;

@end
