//
//  GWLAddViewController.h
//  commemorationDay
//
//  Created by 高文立 on 2020/5/4.
//  Copyright © 2020 gwl. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GWLAddViewController : UIViewController

@property (copy, nonatomic) void (^backData)(NSString *title, NSString *time);

@end

NS_ASSUME_NONNULL_END
