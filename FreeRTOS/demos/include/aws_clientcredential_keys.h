/*
 * FreeRTOS V202012.00
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/*
 ****************************************************************************
 * NOTE!
 * This file is for ease of demonstration only.  Secret information should not
 * be pasted into the header file in production devices.  Do not paste
 * production secrets here!  Production devices should store secrets such as
 * private keys securely, such as within a secure element.  See our examples that
 * demonstrate how to use the PKCS #11 API for secure keys access.
 ****************************************************************************
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUDzk7782NGgw7dW5Yj64R4Tq0+bYwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMDExNDEzMDIz\n"\
"MFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMZQgsegLWYpr5jTkzkY\n"\
"/iSEn6Byzt77KJCtSJ0E9vuBj+p4a0hylUpD7Zk9Cf53T7qfOBcV6EGeGEMaAAQM\n"\
"qr6XhAhTUvR6r94bd3KIkWmS2HRKqmi5oD1GyvySqFbUQPz9z8oUqM01wp/s5RC9\n"\
"TM27SEauxcozcmAi586e2QFFYd7hvUgTHcVbMIc03faGfnYjXpMub/DxKV6l+7jT\n"\
"Xf33QGB3o5OeYohSep6AUlWErgvfi8q+N+400v2d/PXve3XoxpwX0E1TRuw967N0\n"\
"EUJ7tSf+5WALuuRbVFDNgiYGiDTyINlhqPh8KeS0enCiWEtuvMYJ5JJ0BWeQm91j\n"\
"pesCAwEAAaNgMF4wHwYDVR0jBBgwFoAUdMciahU/NuAggw4SOZFiVmSqin4wHQYD\n"\
"VR0OBBYEFJXTS9ulQnYKOfymo4zyos4DrYsUMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQB57p7jjn8qUbvHFhJ6XH7XqX51\n"\
"4b/2jN/DNGaPxqClNu9zF267Ta9AVv/Z90pLwB+VVjpoXbd57IMso7nsSS2UeLlv\n"\
"bAd4aFPuEJ+P93qVXJZHGOv98j6stY1SrRIu/LTW57w5a7h8mXszICWPpzdLEYOk\n"\
"MCKjgtbJNXu1bBFjPFyS8UCPo5Gn1aSHSORArtK0aDweKb4oiEYou39iuBt8OWb8\n"\
"FDhoA+MfvmSqldMMWliY5Ua78eDfwedhJefoF3Kb8qLcjC0KvBEY/9iUCGXe03ha\n"\
"IcPhs1F5IPlgs7E8CD93m3YebcQNDUFWy3/WorGKChfj3JR6quFyqO/1laVb\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEAxlCCx6AtZimvmNOTORj+JISfoHLO3vsokK1InQT2+4GP6nhr\n"\
"SHKVSkPtmT0J/ndPup84FxXoQZ4YQxoABAyqvpeECFNS9Hqv3ht3coiRaZLYdEqq\n"\
"aLmgPUbK/JKoVtRA/P3PyhSozTXCn+zlEL1MzbtIRq7FyjNyYCLnzp7ZAUVh3uG9\n"\
"SBMdxVswhzTd9oZ+diNeky5v8PEpXqX7uNNd/fdAYHejk55iiFJ6noBSVYSuC9+L\n"\
"yr437jTS/Z389e97dejGnBfQTVNG7D3rs3QRQnu1J/7lYAu65FtUUM2CJgaINPIg\n"\
"2WGo+Hwp5LR6cKJYS268xgnkknQFZ5Cb3WOl6wIDAQABAoIBABM+BqKGCUGrc81Z\n"\
"YiSdJzO15qMz4JzEM/htx+jsbWaT+Lnge1BpRdER7ED9KjYVr5fFETU0O/f59hK0\n"\
"uCGsdPjPTNFd/GOab+wWMC3d0HY0+Gm4QPauZDzt3I5LUKg0KiYiHoJWJNbci4jm\n"\
"/Ib2RziDHo01Mh3fhg6L9IAY66dyvvWmk5pwtq6ug4n6clQLcK5mwMqdFp+x0lIJ\n"\
"8mQtNKi6FN1YInS9VuW0kV940pY6v76EeR+csoFccAtBAa9CKeVAB4+psC5Bb22+\n"\
"WnD4elEnIVUXQhTKudKqJ8yd54Z+EposJNbRUiNDEjbtyOoLqV+WODMBj5pV/cQ3\n"\
"KxFysaECgYEA/ecOT1PUKrAZ3+KNEN3XRdFM2awUMjScTLZBWohgZTBqyFCpEnsu\n"\
"QodJR5QZKAZht1AAEMfKCoB66Y4febDDiUwHTrGIEqlcZmOLsL55wr86TM9ysEzc\n"\
"ZfyizFKPwlxeu6Swjzt/FFUr+InN+bjOl+MVSsMoGJFcONEuJX4+qBsCgYEAx/Pm\n"\
"OD/WZRPWlRog7MJ2GzjErVjgTOvwTA6Y3flFkU11YJ1QPtqHkdoB3ommfRPIbMJi\n"\
"0PVvM2y42U31EyQqkiwOxCMIhVJq1SI/phxF0aXHXcoXaYdqzt7yCoS263OZqixi\n"\
"8TDHnA/rsJw9LzPg+sWFxyXLlxwKthMvznitdnECgYEAzHXPQTRJS2LqQy8l1+o9\n"\
"G7zy/OqkjNVu9BtkP2pI7dNyegLyU66cTviwmxJ4u5GACOVEWD76xUA3OnK3iAA/\n"\
"RgXScJ1n7Vcy0ETjTZ3lYV0qroXzXmNWrE4oLw9hMuu9Ya+6em035YC82vTlyG34\n"\
"97jnAYBsfnQ35o0Ucx7Zh/cCgYBSJd0mrOt7OWxGc6alPrthMbBz+3ijgaeGx9R8\n"\
"FcZEDQu1NsxaFlPuUx/DetAAwRjtver1KHCYMwm6lXGjfI9U4G7sm+wLQjIMAHcf\n"\
"2qvAlxhSaw21WGJEPYo5Ug8IqsSuCnBX4Q+RCWVueLIWa3z56h6tE9UR7v5jkXxp\n"\
"mmDBsQKBgDmvBu9XzxzvD3mjW5ir9je1ZiXHidlN6zb5WFCJjWhauWGhYHwD7Dx0\n"\
"vSW3ndZZ+VCvoriG/P5bau565N8QTxBtRaZIBOv1DLhem9ZXfbGKNq5HAQLgmria\n"\
"8T/PWXreSbZZblxl/PvqhNVS5HMmdjMKv/7efALO9QEV49Y4uThG\n"\
"-----END RSA PRIVATE KEY-----"


/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
