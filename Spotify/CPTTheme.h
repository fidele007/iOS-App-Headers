/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:32 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface CPTTheme : NSObject <NSCoding> {
	Class graphClass; 
}
@property (nonatomic,retain) Class graphClass; 
+(id)themeNamed:(id)arg1;
+(id)themeClasses;
+(void)registerTheme:(Class)arg1;
+(id)name;
-(void)applyThemeToGraph:(id)arg1;
-(void)setGraphClass:(Class)arg1;
-(void)applyThemeToBackground:(id)arg1;
-(void)applyThemeToPlotArea:(id)arg1;
-(void)applyThemeToAxisSet:(id)arg1;
-(id)newGraph;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
@end