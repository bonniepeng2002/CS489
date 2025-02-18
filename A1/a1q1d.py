import hashlib

# Using SHA1 hash
def hash(data):
    sha1_hash = hashlib.sha1(data.encode()).hexdigest()
    return sha1_hash
    
# User password input
user_password = "p@s5w0Rd!"

# Hashing the password with SHA1
hashed_password = hash(user_password)

print("Hashed password:", hashed_password)