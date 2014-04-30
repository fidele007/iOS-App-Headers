/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:37 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPPage.h>
#import <PlayableContextProtocol.h>

@interface RadioVC : SPViewController <SPPage, PlayableContextProtocol> {
	BOOL _enableCocaColaBranding; 
	id<PlayableContextProtocolDelegate> _contextDelegate; 
	NSURL* _URL; 
}
@property (nonatomic,retain) NSURL* URL; 				//@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) id<PlayableContextProtocolDelegate> contextDelegate; 				//@synthesize contextDelegate=_contextDelegate - In the implementation block
+(id)radioThumbUrlWithTrack:(id)arg1 isUp:(BOOL)arg2;
+(id)radioStationURLWithSeed:(id)arg1 startedFromElement:(id)arg2;
-(id)getContext;
-(void)setContextDelegate:(id)arg1;
-(int)stackedNavigationPageSize;
-(void)setURL:(id)arg1;
-(id)initWithURL:(id)arg1;
-(void).cxx_destruct;
@end