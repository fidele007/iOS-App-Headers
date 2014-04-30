/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:08 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CPTCalendarFormatter : NSNumberFormatter {
	NSDateFormatter* dateFormatter; 
	NSDate* referenceDate; 
	NSCalendar* referenceCalendar; 
	unsigned referenceCalendarUnit; 
}
@property (nonatomic,retain) NSDateFormatter* dateFormatter; 
@property (nonatomic,copy) NSDate* referenceDate; 
@property (nonatomic,copy) NSCalendar* referenceCalendar; 
@property (assign,nonatomic) unsigned referenceCalendarUnit; 
-(id)initWithDateFormatter:(id)arg1;
-(void)setDateFormatter:(id)arg1;
-(void)setReferenceDate:(id)arg1;
-(void)setReferenceCalendar:(id)arg1;
-(void)setReferenceCalendarUnit:(unsigned)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(id)stringForObjectValue:(id)arg1;
@end