//
//  OATextMultiViewCell.m
//  OsmAnd
//
//  Created by Alexey Kulish on 01/06/15.
//  Copyright (c) 2015 OsmAnd. All rights reserved.
//

#import "OATextMultiViewCell.h"

@implementation OATextMultiViewCell

- (void)awakeFromNib
{
    // Initialization code
    self.textView.selectable = NO;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end