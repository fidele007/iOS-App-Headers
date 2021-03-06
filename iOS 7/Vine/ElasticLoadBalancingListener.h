/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:45 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingListener : NSObject {
	NSString* protocol; 
	NSNumber* loadBalancerPort; 
	NSString* instanceProtocol; 
	NSNumber* instancePort; 
	NSString* sSLCertificateId; 
}
@property (nonatomic,retain) NSString* protocol; 
@property (nonatomic,retain) NSNumber* loadBalancerPort; 
@property (nonatomic,retain) NSString* instanceProtocol; 
@property (nonatomic,retain) NSNumber* instancePort; 
@property (nonatomic,retain) NSString* sSLCertificateId; 
-(void)setLoadBalancerPort:(id)arg1;
-(id)initWithProtocol:(id)arg1 andLoadBalancerPort:(id)arg2 andInstancePort:(id)arg3;
-(void)setInstanceProtocol:(id)arg1;
-(void)setSSLCertificateId:(id)arg1;
-(void)setInstancePort:(id)arg1;
-(void)setProtocol:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end