//
//  MapViewController.h
//  Polygon_App
//
//  Created by admin on 11/10/15.
//  Copyright (c) 2015 admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
//#import <GoogleMaps/GoogleMaps.h>
//#import <MBProgressHUD/MBProgressHUD.h>


//@import GoogleMaps;

@interface MapViewController : UIViewController<UIScrollViewDelegate , CLLocationManagerDelegate> //, GMSMapViewDelegate>
{
    
//    MBProgressHUD *progressHUD;
    
}

@property (nonatomic , strong) CLLocationManager *locationManager;


@property (nonatomic , strong) IBOutlet UIScrollView *scrollMapView;
@property (nonatomic , strong) IBOutlet UILabel *lblPolygonName;
//@property (strong, nonatomic) IBOutlet GMSMapView *mapView;
@property (strong, nonatomic) IBOutlet UIButton *btnPromoterView;

@property (nonatomic, strong) NSDictionary *position;
@property (nonatomic, strong) NSString *userlatitude;
@property (nonatomic, strong) NSString *userlongtitude;
@property (nonatomic, strong) NSArray *polygonList;
@property (nonatomic, strong) NSString *DistrictID;
@property (nonatomic, strong) NSArray *businessList;
@property (nonatomic, strong) NSString *strPolygonName;


//@property (nonatomic, strong) GMSMarker *maker;

- (IBAction)onbtnForwardClicked:(id)sender;
- (void) mapviewSetup;
- (void) requestLocation : (NSString *) latitude logitude : (NSString *) longitude;
- (void) requestBusinessList;


@end
