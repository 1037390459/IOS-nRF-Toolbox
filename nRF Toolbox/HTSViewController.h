//
//  HTSViewController.h
//  nRF Toolbox
//
//  Created by Aleksander Nowakowski on 09/01/14.
//  Copyright (c) 2014 Nordic Semiconductor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "ScannerDelegate.h"

@interface HTSViewController : UIViewController <CBCentralManagerDelegate, CBPeripheralDelegate, ScannerDelegate>

@property (strong, nonatomic) CBCentralManager *bluetoothManager;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImage;
@property (strong, nonatomic) IBOutlet UILabel *verticalLabel;
@property (strong, nonatomic) IBOutlet UIButton *battery;
@property (strong, nonatomic) IBOutlet UILabel *deviceName;
@property (strong, nonatomic) IBOutlet UIButton *connectButton;

@property (strong, nonatomic) IBOutlet UISegmentedControl *degreeControl;
@property (strong, nonatomic) IBOutlet UILabel *temperature;
@property (strong, nonatomic) IBOutlet UILabel *degrees;
@property (strong, nonatomic) IBOutlet UILabel *timestamp;
@property (strong, nonatomic) IBOutlet UILabel *type;
- (IBAction)connectOrDisconnectClicked;
- (IBAction)degreeHasChanged:(id)sender forEvent:(UIEvent *)event;

@end