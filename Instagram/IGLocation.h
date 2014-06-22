/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:32 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGStoredObject.h>

@interface IGLocation : IGStorableObject <IGStoredObject> {
	CLLocation* _locationCoord; 
	NSString* _name; 
	NSString* _streetAddress; 
	NSNumber* _externalID; 
	NSString* _externalSource; 
	NSString* _foursquareV2ID; 
	NSString* _facebookPlacesID; 
}
@property (retain) CLLocation* locationCoord; 				//@synthesize locationCoord=_locationCoord - In the implementation block
@property (copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (copy) NSString* streetAddress; 				//@synthesize streetAddress=_streetAddress - In the implementation block
@property (retain) NSNumber* externalID; 				//@synthesize externalID=_externalID - In the implementation block
@property (copy) NSString* externalSource; 				//@synthesize externalSource=_externalSource - In the implementation block
@property (copy) NSString* foursquareV2ID; 				//@synthesize foursquareV2ID=_foursquareV2ID - In the implementation block
@property (copy) NSString* facebookPlacesID; 				//@synthesize facebookPlacesID=_facebookPlacesID - In the implementation block
@property (copy) int locationType; 
@property (copy) NSString* detailsString; 
+(id)centralizedStore;
+(id)unmanagedLocationWithDictionary:(id)arg1;
-(void)fetchAdditionalInfo;
-(void)setLocationCoord:(id)arg1;
-(void)setStreetAddress:(id)arg1;
-(void)setExternalSource:(id)arg1;
-(void)setFoursquareV2ID:(id)arg1;
-(void)setFacebookPlacesID:(id)arg1;
-(void)openInMaps;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(void)setName:(id)arg1;
-(id)dictionaryRepresentation;
-(void)setExternalID:(id)arg1;
-(BOOL)updateWithDictionary:(id)arg1;
-(void).cxx_destruct;
@end