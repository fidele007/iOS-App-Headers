/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:34 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLUniversalEventManager : NSObject {
}
+(id)managerFileURL;
+(void)createDirectoryForURL:(id)arg1;
+(void)fetchEventIndividual:(id)arg1 global:(id)arg2 date:(id)arg3;
+(void)fetchGlobalEventWithNow:(id)arg1;
+(long long)globalRevision;
+(long long)individualRevision;
+(void)updateEvent:(id)arg1;
+(void)saveRevision;
+(id)eventQueueDictionary;
+(void)setEventWithKey:(id)arg1 event:(id)arg2;
+(void)initialize;
@end