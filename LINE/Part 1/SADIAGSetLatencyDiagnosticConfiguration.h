/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SADIAGSetLatencyDiagnosticConfiguration : SABaseClientBoundCommand {
}
@property (nonatomic,copy) NSArray* diagnosticActions; 
+(id)setLatencyDiagnosticConfiguration;
+(id)setLatencyDiagnosticConfigurationWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setDiagnosticActions:(id)arg1;
@end