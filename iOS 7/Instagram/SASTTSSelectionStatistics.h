/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:16 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAServerBoundCommand.h>

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand> {
}
@property (nonatomic,copy) NSString* completionType; 
@property (nonatomic,copy) NSString* interactionId; 
@property (nonatomic,copy) NSArray* listenedItems; 
@property (assign,nonatomic) int selectedItemIndex; 
@property (nonatomic,copy) NSString* sessionId; 
@property (nonatomic,copy) NSArray* timesListened; 
@property (nonatomic,@dynamic,copy) NSString* aceId; 
@property (nonatomic,@dynamic,copy) NSString* refId; 
+(id)tTSSelectionStatistics;
+(id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setSelectedItemIndex:(int)arg1;
-(id)encodedClassName;
-(void)setSessionId:(id)arg1;
-(void)setInteractionId:(id)arg1;
-(void)setCompletionType:(id)arg1;
-(void)setListenedItems:(id)arg1;
-(void)setTimesListened:(id)arg1;
@end