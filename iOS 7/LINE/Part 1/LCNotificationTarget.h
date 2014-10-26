/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:28 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface LCNotificationTarget : NSObject <NSCoding> {
	int mTargetType; 
	int mCondition; 
	NSString* mVersion; 
	LCNotificationVersion* mVersionInfo; 
}
@property (assign,nonatomic) int targetType; 
@property (assign,nonatomic) int condition; 
@property (nonatomic,retain) NSString* version; 
+(BOOL)valiateWithDictionary:(id)arg1;
-(void)updateVersionInfo;
-(BOOL)isValidWithVersion:(id)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)description;
-(id)initWithDictionary:(id)arg1;
-(void)setVersion:(id)arg1;
-(void)setCondition:(int)arg1;
-(void)setTargetType:(int)arg1;
@end