/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:14 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBFileUtilities : NSObject {
}
+(BOOL)setExcludedFromBackup:(BOOL)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
+(BOOL)setExcludedFromBackup:(BOOL)arg1 ofItemsInDirectoryAtPath:(id)arg2 error:(id*)arg3;
+(BOOL)setExcludedFromBackup:(BOOL)arg1 ofItemAtURL:(id)arg2 error:(id*)arg3;
+(BOOL)setExcludedFromBackup:(BOOL)arg1 ofItemsInDirectoryAtURL:(id)arg2 error:(id*)arg3;
@end