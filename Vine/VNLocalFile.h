/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:35 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>
#import <NSCopying.h>

@interface VNLocalFile : NSObject <NSCoding, NSCopying> {
	NSString* _filename; 
}
@property (nonatomic,retain) NSString* filename; 				//@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSURL* url; 
-(id)initWithName:(id)arg1 folder:(id)arg2;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(BOOL)isEqual:(id)arg1;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1;
-(id)initWithPath:(id)arg1;
-(id)initWithName:(id)arg1;
-(void)setFilename:(id)arg1;
-(void).cxx_destruct;
@end