/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:21 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MKMapViewDelegate.h>
#import <IGFeedToggleViewDelegate.h>

@interface IGLocationTableHeaderView : UIView <MKMapViewDelegate, IGFeedToggleViewDelegate> {
	IGLocation* _location; 
	IGLocationDetailPageViewController* _delegate; 
	MKMapView* _mapView; 
	IGSimpleButton* _foursquareButton; 
	IGFeedToggleView* _toggleView; 
}
@property (nonatomic,retain) IGLocation* location; 				//@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) IGLocationDetailPageViewController* delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapView* mapView; 				//@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) IGSimpleButton* foursquareButton; 				//@synthesize foursquareButton=_foursquareButton - In the implementation block
@property (nonatomic,retain) IGFeedToggleView* toggleView; 				//@synthesize toggleView=_toggleView - In the implementation block
-(void)feedToggle:(id)arg1 selectedButton:(int)arg2;
-(void)openFoursquare;
-(void)setFoursquareButton:(id)arg1;
-(void)setToggleView:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setMapView:(id)arg1;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1;
@end