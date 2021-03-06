/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:31 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NRStats : NSObject {
	NSString* _name; 
	NSMutableArray* _times; 
	NSMutableArray* _data; 
	id<NRStatsDelegate> _delegate; 
	double _maximumDataAge; 
	double _timeGranuality; 
	NSFormatter* _formatter; 
}
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray* times; 				//@synthesize times=_times - In the implementation block
@property (nonatomic,retain) NSMutableArray* data; 				//@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double maximumDataAge; 				//@synthesize maximumDataAge=_maximumDataAge - In the implementation block
@property (nonatomic,retain) NSFormatter* formatter; 				//@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) double timeGranuality; 				//@synthesize timeGranuality=_timeGranuality - In the implementation block
@property (assign,nonatomic) id<NRStatsDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
-(void)addPoint:(float)arg1 atTime:(double)arg2;
-(void)setMaximumDataAge:(double)arg1;
-(void)setTimeGranuality:(double)arg1;
-(void)setTimes:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(void)setData:(id)arg1;
-(void)setName:(id)arg1;
-(id)dictionaryRepresentation;
-(id)initWithName:(id)arg1;
-(void)setFormatter:(id)arg1;
@end