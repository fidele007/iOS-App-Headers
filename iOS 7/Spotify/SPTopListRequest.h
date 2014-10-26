/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:25 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTopListRequest : SPRequest {
	NSString* _username; 
	int _type; 
	int _regionType; 
	NSString* _countryCode; 
	NSObject<SPToplistService>* _toplistService; 
	SPTask* _task; 
}
-(id)initWithToplistType:(int)arg1 forCountryCode:(id)arg2;
-(id)initWithToplistType:(int)arg1 forUsername:(id)arg2;
-(void)startTrackLookup;
-(void)startAlbumLookup;
-(void)startArtistLookup;
-(id)initWithToplistType:(int)arg1;
-(id)init;
-(void)cancel;
-(void)start;
-(void).cxx_destruct;
@end