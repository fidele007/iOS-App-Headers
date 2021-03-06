/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:27 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MessageBoxService : NSObject {
}
+(void)messageBoxForID:(id)arg1 channelID:(id)arg2 lastMessagesCount:(int)arg3 completionBlock:(id)arg4;
+(void)messageBoxesInChannelForID:(id)arg1 lastMessageCount:(int)arg2 completionBlock:(id)arg3;
+(void)messagesBySequenceNumber:(id)arg1 channelID:(id)arg2 startSeq:(long long)arg3 endSeq:(long long)arg4 completionBlock:(id)arg5;
+(void)removeMessage:(id)arg1 completionBlock:(id)arg2;
+(void)myHomeMessageBoxForID:(id)arg1 lastMessagesCount:(int)arg2 completionBlock:(id)arg3;
+(void)myHomeMessageBoxesForLastMessageCount:(int)arg1 completionBlock:(id)arg2;
+(void)myHomeMessagesBySequenceNumber:(id)arg1 startSeq:(long long)arg2 endSeq:(long long)arg3 completionBlock:(id)arg4;
+(void)postMessage:(id)arg1 requestSequence:(int)arg2 completionBlock:(id)arg3;
+(void)removeFromMyHomeMessage:(id)arg1 completionBlock:(id)arg2;
@end