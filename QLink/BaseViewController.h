//
//  BaseViewController.h
//  QLink
//
//  Created by 尤日华 on 14-10-12.
//  Copyright (c) 2014年 SANSAN. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GCDAsyncSocket.h"
#import "GCDAsyncUdpSocket.h"

@interface BaseViewController : UIViewController
{
    long udpTag_;
    
    GCDAsyncUdpSocket *udpSocket_;
    GCDAsyncSocket *asyncSocket_;
}
@end
