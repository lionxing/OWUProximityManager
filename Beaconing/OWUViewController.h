//
//  OWUViewController.h
//  Beaconing
//
//  Created by David Ohayon on 10/11/13.
//  Copyright (c) 2013 ohwutup software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWUBlueBeaconServiceManager.h"

@interface OWUViewController : UIViewController <OWUBlueBeaconServerDelegate, OWUProximityControllerClientDelegate>

@end
