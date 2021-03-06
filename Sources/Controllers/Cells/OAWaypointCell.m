//
//  OAWaypointCell.m
//  OsmAnd
//
//  Created by Alexey Kulish on 20/03/2018.
//  Copyright © 2018 OsmAnd. All rights reserved.
//

#import "OAWaypointCell.h"

@implementation OAWaypointCell

- (void) awakeFromNib
{
    [super awakeFromNib];
}

- (void) setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    // Configure the view for the selected state
}

- (void) updateLayout
{
    CGSize cellSize = self.bounds.size;
    CGFloat lx = 50;
    CGFloat rx = 0;
    
    if (!_removeButton.hidden)
    {
        CGRect btnFrame = _removeButton.frame;
        _removeButton.center = CGPointMake(cellSize.width - rx - btnFrame.size.width / 2, _removeButton.center.y);
        rx += btnFrame.size.width;
    }
    if (!_moreButton.hidden)
    {
        CGRect btnFrame = _moreButton.frame;
        _moreButton.center = CGPointMake(cellSize.width - rx - btnFrame.size.width / 2, _moreButton.center.y);
        rx += btnFrame.size.width;
    }
    CGRect titleFrame = _titleLabel.frame;
    titleFrame.size.width = cellSize.width - rx - lx;
    _titleLabel.frame = titleFrame;

    CGRect descFrame = _descLabel.frame;
    descFrame.size.width = titleFrame.size.width;
    _descLabel.frame = descFrame;
}

@end
