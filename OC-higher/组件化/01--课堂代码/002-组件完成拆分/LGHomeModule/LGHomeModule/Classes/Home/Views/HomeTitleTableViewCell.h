//
//  HomeTitleTableViewCell.h
//  LGVideo
//
//  Created by LG on 24/03/2018.
//  Copyright © 2018 LG. All rights reserved.
//

#import "LGTableViewDataConfigProtocol.h"

@interface HomeTitleTableViewCell<LGTableViewDataConfigProtocol>

@property (weak, nonatomic) IBOutlet UIImageView *iconView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@end
