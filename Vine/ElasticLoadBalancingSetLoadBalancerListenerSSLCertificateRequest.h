/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:36 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ElasticLoadBalancingSetLoadBalancerListenerSSLCertificateRequest : AmazonServiceRequestConfig {
	NSString* loadBalancerName; 
	NSNumber* loadBalancerPort; 
	NSString* sSLCertificateId; 
}
@property (nonatomic,retain) NSString* loadBalancerName; 
@property (nonatomic,retain) NSNumber* loadBalancerPort; 
@property (nonatomic,retain) NSString* sSLCertificateId; 
-(void)setLoadBalancerPort:(id)arg1;
-(void)setSSLCertificateId:(id)arg1;
-(id)initWithLoadBalancerName:(id)arg1 andLoadBalancerPort:(id)arg2 andSSLCertificateId:(id)arg3;
-(void)setLoadBalancerName:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
@end